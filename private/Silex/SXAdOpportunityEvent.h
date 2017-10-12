//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Silex/SXAnalyticsEvent.h>

@class ADBannerView, NSError, NSString;

@interface SXAdOpportunityEvent : SXAnalyticsEvent
{
    _Bool _expanded;
    _Bool _shown;
    int _opportunityError;
    NSString *_opportunityIdentifier;
    double _positionInArticle;
    NSString *_componentIdentifier;
    NSError *_error;
    ADBannerView *_bannerView;
}

@property(nonatomic) _Bool shown; // @synthesize shown=_shown;
@property(nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
@property(retain, nonatomic) ADBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) int opportunityError; // @synthesize opportunityError=_opportunityError;
@property(retain, nonatomic) NSString *componentIdentifier; // @synthesize componentIdentifier=_componentIdentifier;
@property(nonatomic) double positionInArticle; // @synthesize positionInArticle=_positionInArticle;
@property(retain, nonatomic) NSString *opportunityIdentifier; // @synthesize opportunityIdentifier=_opportunityIdentifier;
- (void).cxx_destruct;
- (id)description;

@end
