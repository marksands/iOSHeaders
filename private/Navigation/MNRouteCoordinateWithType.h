//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface MNRouteCoordinateWithType : NSObject
{
    unsigned long long _significanceType;
    struct PolylineCoordinate _routeCoordinate;
}

+ (id)convergenceCoordinate:(struct PolylineCoordinate)arg1;
+ (id)divergenceCoordinate:(struct PolylineCoordinate)arg1;
@property(nonatomic) struct PolylineCoordinate routeCoordinate; // @synthesize routeCoordinate=_routeCoordinate;
@property(nonatomic) unsigned long long significanceType; // @synthesize significanceType=_significanceType;
- (id).cxx_construct;
- (id)description;

@end

