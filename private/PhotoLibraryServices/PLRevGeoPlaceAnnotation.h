//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface PLRevGeoPlaceAnnotation : NSObject <NSCopying>
{
    int _placeLevel;
    NSString *_placeName;
}

@property(retain, nonatomic) NSString *placeName; // @synthesize placeName=_placeName;
@property(nonatomic) int placeLevel; // @synthesize placeLevel=_placeLevel;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

@end

