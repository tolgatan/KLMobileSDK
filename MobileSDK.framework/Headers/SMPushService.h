/*
 * Copyright © 2014 GENBAND. All Rights Reserved.
 *
 * GENBAND CONFIDENTIAL. All information, copyrights, trade secrets
 * and other intellectual property rights, contained herein are the property
 * of GENBAND. This document is strictly confidential and must not be
 * copied, accessed, disclosed or used in any manner, in whole or in part,
 * without GENBAND's express written authorization.
 *
 * @version: 4.6.1.1
 *
 * @version: 4.6.1.1
 *
 * @version: 4.6.1.1
 *
 * @version: 4.6.1.1
 *
 * @version: 4.6.1.1
 *
 * @version: 4.6.1.1
 *
 * @version: 4.6.1.1
 *
 * @version: 4.6.0
 *
 * @version: 4.6.0
 *
 * @version: 4.6.0
 *
 */

#import <Foundation/Foundation.h>

@protocol SMPushSubscriptionDelegate;
@class SMMobileError;
@class PKPushCredentials;

/**
 * Push Service enables push message and event injection to MobileSDK from Application layer
 *
 * @since 3.0.5
 * @updated 4.6.0
 **/
@interface SMPushService : NSObject

/**
 * @brief The delegate object that must be implemented to receive the callbacks.
 * @see SMPushSubscriptionDelegate
 *
 * @since 4.6.0
 */
@property(nonatomic, strong, nullable) id<SMPushSubscriptionDelegate> pushSubscriptionDelegate;

/**
 * This method registers application to push notifications channel.
 * Fail and success calls will be transmitted through the completion block.
 * If the registration is successful, a subscriptionID will be returned which can be used to update or remove the push subscription.
 *
 * @param pushCredentials push credentials generated by the PushKit
 * @param realm realm of the push server
 * @param completionBlock block implementation that will be used to return success or fail
 *
 * @since 4.6.0
 */
- (void) subscribeToPushNotificationsWithPushCredentials:(nonnull PKPushCredentials *)pushCredentials
                                                andRealm:(nonnull NSString *)realm
                                       completionHandler:(void (^_Nonnull)(NSString * _Nullable subscriptionID, SMMobileError * _Nullable error))completionBlock;

/**
 * This method updates the push subscription with a new device token.
 *
 * @param pushCredentials push credentials generated by the PushKit
 * @param subscriptionID unique ID assigned to the subscribed device by SPiDR/KL after the push subscription
 * @param completionBlock block implementation that will be used to return success or fail
 *
 * @since 4.6.0
 */
- (void) updatePushSubscriptionWithPushCredentials:(nonnull PKPushCredentials *)pushCredentials
                                 andSubscriptionID:(nonnull NSString *)subscriptionID
                                 completionHandler:(void (^_Nullable)(SMMobileError * _Nullable error))completionBlock;

/**
 * This method removes the push notification subscription.
 *
 * @param subscriptionID unique ID assigned to the subscribed device by SPiDR/KL after the push subscription
 * @param completionBlock block implementation that will be used to return success or fail
 *
 * @since 4.6.0
 */
- (void) unsubscribeFromPushNotificationsWithSubscriptionID:(nonnull NSString *)subscriptionID
                                          completionHandler:(void (^_Nullable)(SMMobileError * _Nullable error))completionBlock;

/**
 * Enables message passing to MobileSDK (messages can be sent via push notification, websocket or any different way)
 *
 * @param message payload dictionary for incoming notification
 * @param error json object parse error if exists
 * @param completionHandler returns error if any json object parse error exists or notification data is not related with the MobileSDK
 *
 * @since 3.0.5
 * @updated 4.6.0
 */
- (void) injectPushMessage:(nonnull NSDictionary *)message
         completionHandler:(void (^ _Nonnull)(SMMobileError * _Nullable error))completionHandler;

/*_Nullable*
 * Constructing is disallowed from API level.
 */
- (nullable id)init __attribute__((unavailable("init is not a supported initializer for this class.")));

@end
