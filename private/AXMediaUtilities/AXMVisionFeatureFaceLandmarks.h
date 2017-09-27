//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDictionary;

@interface AXMVisionFeatureFaceLandmarks : NSObject <NSSecureCoding>
{
    _Bool _is3DLandmarks;
    NSDictionary *_results;
}

+ (id)unitTestingFaceLandmarksIs3D:(_Bool)arg1;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSDictionary *results; // @synthesize results=_results;
@property(nonatomic) _Bool is3DLandmarks; // @synthesize is3DLandmarks=_is3DLandmarks;
- (void).cxx_destruct;
- (id)localizedStringForLandmarkType:(unsigned long long)arg1;
- (id)pointValuesForFaceLandmarkType:(unsigned long long)arg1;
- (id)pointsArrayForRegion:(id)arg1;
- (id)initWithVisionFaceLandmarks:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

