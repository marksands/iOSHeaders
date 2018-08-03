//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CarPlay/CPTemplate.h>

#import "CPBarButtonProviding.h"
#import "CPGridTemplateClientDelegate.h"

@class NSArray, NSMutableArray, NSString;

@interface CPGridTemplate : CPTemplate <CPGridTemplateClientDelegate, CPBarButtonProviding>
{
    NSMutableArray *_buttons;
    NSArray *_gridButtons;
    NSString *_title;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSArray *gridButtons; // @synthesize gridButtons=_gridButtons;
- (void).cxx_destruct;
- (void)handleActionForControlIdentifier:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 gridButtons:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSArray *leadingNavigationBarButtons;
@property(readonly) Class superclass;
@property(retain, nonatomic) id <CPGridTemplateProviding> templateProvider; // @dynamic templateProvider;
@property(retain, nonatomic) NSArray *trailingNavigationBarButtons;

@end

