//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CPControl.h"
#import "NSSecureCoding.h"

@class NSString, NSUUID, UIImage;

@interface CPMapButton : NSObject <CPControl, NSSecureCoding>
{
    _Bool _enabled;
    _Bool _hidden;
    NSUUID *_identifier;
    UIImage *_image;
    UIImage *_focusedImage;
    CDUnknownBlockType _handler;
    id <CPMapButtonDelegate> _controlDelegate;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) __weak id <CPMapButtonDelegate> controlDelegate; // @synthesize controlDelegate=_controlDelegate;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(retain, nonatomic) UIImage *focusedImage; // @synthesize focusedImage=_focusedImage;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)handlePrimaryAction;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithHandler:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

