//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IKImageElement, IKTextElement, IKViewElement, TVImageProxy, UIColor;

@interface _TVPopoverOption : NSObject
{
    IKViewElement *_cardElement;
    IKImageElement *_imageElement;
    IKViewElement *_optionElement;
    IKTextElement *_titleElement;
    unsigned long long _type;
    UIColor *_highlightColor;
}

@property(readonly, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) IKTextElement *titleElement; // @synthesize titleElement=_titleElement;
@property(readonly, nonatomic) IKViewElement *optionElement; // @synthesize optionElement=_optionElement;
@property(readonly, nonatomic) IKImageElement *imageElement; // @synthesize imageElement=_imageElement;
@property(readonly, nonatomic) IKViewElement *cardElement; // @synthesize cardElement=_cardElement;
- (void).cxx_destruct;
- (void)_populateWithElement:(id)arg1;
- (id)_init;
@property(readonly, nonatomic) TVImageProxy *imageProxy;
- (id)init;
- (id)initWithViewElement:(id)arg1;

@end

