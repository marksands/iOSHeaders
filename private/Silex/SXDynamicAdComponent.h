//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SXComponentAnchor;

@interface SXDynamicAdComponent : NSObject
{
    _Bool _allowMediumRectangle;
    NSString *_identifier;
    unsigned long long _bannerType;
    NSString *_layout;
    SXComponentAnchor *_anchor;
}

@property(readonly, nonatomic) _Bool allowMediumRectangle; // @synthesize allowMediumRectangle=_allowMediumRectangle;
@property(retain, nonatomic) SXComponentAnchor *anchor; // @synthesize anchor=_anchor;
@property(readonly, nonatomic) NSString *layout; // @synthesize layout=_layout;
@property(readonly, nonatomic) unsigned long long bannerType; // @synthesize bannerType=_bannerType;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *type;
@property(readonly, nonatomic) int role;
- (unsigned long long)adType;
- (id)initWithBannerType:(unsigned long long)arg1 allowMediumRectangle:(_Bool)arg2 andLayoutIdentifier:(id)arg3;

@end

