Pod::Spec.new do |s|
    s.name              = 'KLMobileSDK'
    s.version           = '1.0.1'
    s.summary           = 'KLMobileSDK'
    s.homepage          = 'https://github.com/Kandy-IO/'
    s.license 		= { :type => 'MIT', :file => 'mit-license.txt'}
    s.author            = { 'Name' => 'tolgat@netrd.com.tr' }
    s.platform          = :ios
    s.source            = { :git => 'https://github.com/tolgatan/KLMobileSDK.git', :tag => '1.0.1'}
    #s.dependency 	'KLCPaaSWebRTC'
    #s.source_files      = 'KLMobileSDK.framework/Headers/*.h'
    s.ios.deployment_target   = '9.0'
    s.ios.vendored_frameworks = ['MobileSDK.framework']



end