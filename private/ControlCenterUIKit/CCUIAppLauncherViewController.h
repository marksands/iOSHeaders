//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ControlCenterUIKit/CCUIMenuModuleViewController.h>

@class CCUIAppLauncherModule, SBFApplication;

@interface CCUIAppLauncherViewController : CCUIMenuModuleViewController
{
    SBFApplication *_application;
    CCUIAppLauncherModule *_module;
}

@property(nonatomic) __weak CCUIAppLauncherModule *module; // @synthesize module=_module;
- (void).cxx_destruct;
- (void)_activateApplicationForShortcutItem:(id)arg1;
- (void)_addActionForShortcutItem:(id)arg1;
- (void)_updateApplicationShortcutsActions;
- (_Bool)shouldBeginTransitionToExpandedContentModule;
- (void)viewDidLoad;
- (void)buttonTapped:(id)arg1 forEvent:(id)arg2;

@end

