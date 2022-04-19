Pod::Spec.new do |s|
  s.name             = "SpreoUIPod"
  s.version          = "1.0.2"
  s.summary          = "Spreo UI Framework"
 
  s.description      = "Spreo UI Module Framework"
 
  s.homepage         = "https://github.com/SpreoLLC/UiModulePod"
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { "alozovoy" => "a.lozovoy@belitsoft.com" }
  s.source           = { :git => "https://github.com/SpreoLLC/UiModulePod.git", :tag => s.version.to_s }
 
  s.platform     = :ios, '11.0'
  
  s.vendored_frameworks = "Classes/IosUIModule.framework"

  s.exclude_files = "Classes/IosUIModuleBundle.bundle/Info.plist"

  s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  s.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }

  s.resource_bundles = {
    'IosUIModule' => ['Classes/IosUIModuleBundle.bundle/**']
  }

  s.dependency 'SpreoPod', '2.44'
  s.requires_arc          = true
  
end
