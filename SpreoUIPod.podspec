Pod::Spec.new do |s|
  s.name             = "SpreoUIPod"
  s.version          = "1.4.0"
  s.summary          = "Spreo UI Framework"
 
  s.description      = "Spreo UI Module Framework"
 
  s.homepage         = "https://github.com/centraksw/UiModulePod"
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { "alozovoy" => "alozovoy@centrak.com" }
  s.source           = { :git => "https://github.com/centraksw/UiModulePod.git", :tag => s.version.to_s }
 
  s.platform     = :ios, '11.0'
  
  s.vendored_frameworks = "Classes/IosUIModule.framework"

  s.exclude_files = "Classes/IosUIModule.bundle/Info.plist"

  s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  s.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }

  s.resource_bundles = {
    'IosUIModule' => ['Classes/IosUIModule.bundle/**']
  }

  s.dependency 'SpreoSdkPod', '6.11.0'
  s.requires_arc          = true
  
end
