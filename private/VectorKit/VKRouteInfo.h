//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOComposedRoute, NSString;

@interface VKRouteInfo : NSObject
{
    GEOComposedRoute *_route;
    NSString *_etaText;
    struct PolylineCoordinate _uniqueStart;
    struct PolylineCoordinate _uniqueEnd;
}

@property(nonatomic) struct PolylineCoordinate uniqueEnd; // @synthesize uniqueEnd=_uniqueEnd;
@property(nonatomic) struct PolylineCoordinate uniqueStart; // @synthesize uniqueStart=_uniqueStart;
@property(retain, nonatomic) NSString *etaText; // @synthesize etaText=_etaText;
@property(readonly, nonatomic) GEOComposedRoute *route; // @synthesize route=_route;
- (id).cxx_construct;
- (void)dealloc;
- (id)initWithComposedRoute:(id)arg1 etaText:(id)arg2 uniqueStart:(struct PolylineCoordinate)arg3 uniqueEnd:(struct PolylineCoordinate)arg4;

@end

