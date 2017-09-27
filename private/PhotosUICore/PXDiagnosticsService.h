//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, UIViewController;

@interface PXDiagnosticsService : NSObject
{
    _Bool _canProvideConsoleDescription;
    _Bool _canProvideContextualViewController;
    _Bool _canProvideSettingsViewController;
    NSArray *_itemProviders;
    NSString *_title;
    NSString *_consoleDescription;
    UIViewController *_settingsViewController;
}

@property(readonly, nonatomic) UIViewController *settingsViewController; // @synthesize settingsViewController=_settingsViewController;
@property(readonly, nonatomic) _Bool canProvideSettingsViewController; // @synthesize canProvideSettingsViewController=_canProvideSettingsViewController;
@property(readonly, nonatomic) _Bool canProvideContextualViewController; // @synthesize canProvideContextualViewController=_canProvideContextualViewController;
@property(readonly, nonatomic) NSString *consoleDescription; // @synthesize consoleDescription=_consoleDescription;
@property(readonly, nonatomic) _Bool canProvideConsoleDescription; // @synthesize canProvideConsoleDescription=_canProvideConsoleDescription;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSArray *itemProviders; // @synthesize itemProviders=_itemProviders;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIViewController *contextualViewController;
- (id)initWithItemProviders:(id)arg1;
- (id)init;

@end

