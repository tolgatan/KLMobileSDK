/*
 * Copyright © 2014 GENBAND. All Rights Reserved.
 *
 * GENBAND CONFIDENTIAL. All information, copyrights, trade secrets
 * and other intellectual property rights, contained herein are the property
 * of GENBAND. This document is strictly confidential and must not be
 * copied, accessed, disclosed or used in any manner, in whole or in part,
 * without GENBAND's express written authorization.
 *
 * @version: 4.6.2
 *
 */

#import <UIKit/UIKit.h>

FOUNDATION_EXPORT double MobileSDKVersionNumber;

FOUNDATION_EXPORT const unsigned char MobileSDKVersionString[];

//Call
#import <MobileSDK/SMCallDelegate.h>
#import <MobileSDK/SMCallServiceDelegate.h>
#import <MobileSDK/SMIncomingCallDelegate.h>
#import <MobileSDK/SMOutgoingCallDelegate.h>
#import <MobileSDK/SMCallApplicationDelegate.h>
#import <MobileSDK/SMCallState.h>
#import <MobileSDK/SMCallTypes.h>
#import <MobileSDK/SMCallStatistic.h>
#import <MobileSDK/SMMediaAttributes.h>

//ServiceProvider
#import <MobileSDK/SMServiceProvider.h>

//Registration
#import <MobileSDK/SMRegistrationApplicationDelegate.h>
#import <MobileSDK/SMServiceTypes.h>
#import <MobileSDK/SMNotificationStates.h>
#import <MobileSDK/SMRegistrationStates.h>
#import <MobileSDK/SMRegistrationService.h>

//Utilities
#import <MobileSDK/SMMobileError.h>
#import <MobileSDK/SMConfiguration.h>
#import <MobileSDK/SMCameraModes.h>
#import <MobileSDK/SMLoggingDelegate.h>
#import <MobileSDK/SMUriAddress.h>
#import <MobileSDK/SMICEServers.h>
#import <MobileSDK/SMCodecSet.h>
#import <MobileSDK/SMCodecToReplace.h>
#import <MobileSDK/SMICEOptions.h>
#import <MobileSDK/SMSlowStartCallPolicy.h>
#import <MobileSDK/SMAudioSessionConfiguration.h>
#import <MobileSDK/SMAudioCodecConfiguration.h>
#import <MobileSDK/SMCallReceiveBandwidthLimit.h>

//AddressBook
#import <MobileSDK/SMContact.h>
#import <MobileSDK/SMAddressBookApplicationDelegate.h>
#import <MobileSDK/SMAddressBookServiceDelegate.h>

//IM
#import <MobileSDK/SMIMApplicationDelegate.h>
#import <MobileSDK/SMOutGoingIMDelegate.h>
#import <MobileSDK/SMInComingIMDelegate.h>
#import <MobileSDK/SMIMDelegate.h>
#import <MobileSDK/SMIMServiceDelegate.h>

//Presence
#import <MobileSDK/SMPresenceApplicationDelegate.h>
#import <MobileSDK/SMPresenceDelegate.h>
#import <MobileSDK/SMPresenceStates.h>
#import <MobileSDK/SMPresenceActivityType.h>
#import <MobileSDK/SMPresenceServiceDelegate.h>

// Push
#import <MobileSDK/SMPushService.h>
#import <MobileSDK/SMPushSubscriptionDelegate.h>

//Call Log
#import <MobileSDK/SMCallLogServiceDelegate.h>
