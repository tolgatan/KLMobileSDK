Pod::Spec.new do |s|
    s.name              = 'KLMobileSDK'
    s.version           = '1.1.3'
    s.summary           = 'KLMobileSDK'
    s.homepage          = 'https://github.com/Kandy-IO/'
    s.license 		      = { :type => 'MIT', :file => 'mit-license.txt'}
    s.author            = { 'Name' => 'tolgat@netrd.com.tr' }
    s.platform          = :ios
    s.source            = { :git => 'https://github.com/tolgatan/KLMobileSDK.git', :tag => '1.1.3'}
    #s.dependency 	'KLCPaaSWebRTC'
    #s.source_files      = 'KLMobileSDK.framework/Headers/*.h'
    s.ios.deployment_target   = '9.0'
    s.ios.frameworks = ['AvFoundation','SystemConfiguration','GLKit','VideoToolbox','AudioToolbox','PushKit']
    s.library = ['c++','icucore','z']
    s.vendored_frameworks = ['MobileSDK.framework', 'WebRTC.framework']
    #s.ios.vendored_frameworks = 'WebRTC.framework'
    s.pod_target_xcconfig = {
    	"OTHER_LDFLAGS" => '$(inherited) -framework "WebRTC"',
    	"CLANG_ALLOW_NON_MODULAR_INCLUDES_IN_FRAMEWORK_MODULES" => 'YES',
    	"FRAMEWORK_SEARCH_PATHS" => '$(inherited) "${PODS_ROOT}/KLCPaaSWebRTC/Frameworks"'
   }



end
