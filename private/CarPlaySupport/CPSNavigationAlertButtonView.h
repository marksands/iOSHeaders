//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CPSNavigationAlertFocusButton;

@interface CPSNavigationAlertButtonView : UIView
{
    CPSNavigationAlertFocusButton *_primaryButton;
    CPSNavigationAlertFocusButton *_secondaryButton;
}

@property(retain, nonatomic) CPSNavigationAlertFocusButton *secondaryButton; // @synthesize secondaryButton=_secondaryButton;
@property(retain, nonatomic) CPSNavigationAlertFocusButton *primaryButton; // @synthesize primaryButton=_primaryButton;
- (void).cxx_destruct;
- (id)initWithPrimaryAction:(id)arg1 secondaryAction:(id)arg2 progressView:(id)arg3;

@end

