//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIImageViewElement, SKUILabelViewElement;

@interface SKUIActivityIndicatorViewElement : SKUIViewElement
{
    double _period;
}

- (long long)pageComponentType;
- (_Bool)isDisabled;
@property(readonly, nonatomic) SKUILabelViewElement *text;
@property(readonly, nonatomic) double period;
@property(readonly, nonatomic) SKUIImageViewElement *image;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

