#
# Be sure to run `pod lib lint HRBocSignContract.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'HRSigningContract'
  s.version          = '1.7.0'
  s.summary          = '电子签约SDK'

  s.description      = <<-DESC
                电子签约SDK，用来集成APP
                       DESC

  s.homepage         = 'https://github.com/bizhanlu/HRSigningContract'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'bizhanlu' => 'bizhanlu@hrfax.cn' }
  s.source           = { :git => 'https://github.com/bizhanlu/HRSigningContract.git', :tag => s.version.to_s }
  s.ios.deployment_target = '8.0'
  s.vendored_frameworks = 'Frameworks/*'
  s.resources = 'Resources/*'
  s.libraries = 'stdc++'
end
