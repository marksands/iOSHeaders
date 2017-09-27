//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIAlertController.h"

@interface CMKLowDiskSpaceAlertController : UIAlertController
{
    _Bool _showsSettingsButton;
    id <CMKLowDiskSpaceAlertControllerDelegate> _delegate;
}

+ (void)showUsageSettings;
+ (id)alertControllerWithTitle:(id)arg1 message:(id)arg2 preferredStyle:(long long)arg3;
+ (id)alertControllerWithTitle:(id)arg1 message:(id)arg2 showSettingsButton:(_Bool)arg3;
@property(nonatomic) __weak id <CMKLowDiskSpaceAlertControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool showsSettingsButton; // @synthesize showsSettingsButton=_showsSettingsButton;
- (void).cxx_destruct;
- (void)show;

@end

