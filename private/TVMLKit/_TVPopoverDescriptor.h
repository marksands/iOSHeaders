//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IKImageElement, IKViewElement, NSArray, NSString, UIColor;

@interface _TVPopoverDescriptor : NSObject
{
    IKImageElement *_imageElement;
    IKViewElement *_buttonElement;
    IKViewElement *_popoverElement;
    UIColor *_tintColor;
    NSString *_title;
    unsigned long long _type;
    NSArray *_popoverEntries;
    struct CGSize _popoverSize;
}

@property(readonly, copy, nonatomic) NSArray *popoverEntries; // @synthesize popoverEntries=_popoverEntries;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(readonly, nonatomic) struct CGSize popoverSize; // @synthesize popoverSize=_popoverSize;
@property(readonly, nonatomic) IKViewElement *popoverElement; // @synthesize popoverElement=_popoverElement;
@property(readonly, nonatomic) IKViewElement *buttonElement; // @synthesize buttonElement=_buttonElement;
- (void).cxx_destruct;
- (void)_populateWithElement:(id)arg1;
- (id)_init;
- (id)init;
- (id)initWithViewElement:(id)arg1;

@end

