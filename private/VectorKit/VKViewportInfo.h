//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface VKViewportInfo : NSObject
{
    CDStruct_2c43369c _centerCoordinate;
    long long _tileSize;
    float _zoomLevel;
    double _pitch;
    double _yaw;
}

@property(nonatomic) double yaw; // @synthesize yaw=_yaw;
@property(nonatomic) double pitch; // @synthesize pitch=_pitch;
@property(nonatomic) float zoomLevel; // @synthesize zoomLevel=_zoomLevel;
@property(nonatomic) long long tileSize; // @synthesize tileSize=_tileSize;
@property(nonatomic) CDStruct_c3b9c2ee centerCoordinate; // @synthesize centerCoordinate=_centerCoordinate;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;

@end

