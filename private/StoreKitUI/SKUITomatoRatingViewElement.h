//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIViewElementText;

@interface SKUITomatoRatingViewElement : SKUIViewElement
{
    long long _freshness;
    float _tomatoRating;
    SKUIViewElementText *_ratingText;
}

@property(readonly, nonatomic) SKUIViewElementText *ratingText; // @synthesize ratingText=_ratingText;
@property(readonly, nonatomic) float tomatoRating; // @synthesize tomatoRating=_tomatoRating;
@property(readonly, nonatomic) long long freshness; // @synthesize freshness=_freshness;
- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

