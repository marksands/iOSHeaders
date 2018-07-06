//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CarPlay/CPTemplate.h>

#import "CPAlertDelegate.h"

@class NSArray, NSString;

@interface CPActionSheetTemplate : CPTemplate <CPAlertDelegate>
{
    NSString *_title;
    NSString *_message;
    NSArray *_actions;
    id <CPAlertDelegate> _alertDelegate;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) id <CPAlertDelegate> alertDelegate; // @synthesize alertDelegate=_alertDelegate;
@property(readonly, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)setTrailingNavigationBarButtons:(id)arg1;
- (id)trailingNavigationBarButtons;
- (void)setLeadingNavigationBarButtons:(id)arg1;
- (id)leadingNavigationBarButtons;
- (void)handleAlertActionForIdentifier:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2 actions:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

