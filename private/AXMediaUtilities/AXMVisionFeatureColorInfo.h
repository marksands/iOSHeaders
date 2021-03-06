//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray;

@interface AXMVisionFeatureColorInfo : NSObject <NSSecureCoding>
{
    double _remainingColorWeight;
    NSArray *_mainColors;
    NSArray *_mainColorWeights;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSArray *mainColorWeights; // @synthesize mainColorWeights=_mainColorWeights;
@property(retain, nonatomic) NSArray *mainColors; // @synthesize mainColors=_mainColors;
@property(nonatomic) double remainingColorWeight; // @synthesize remainingColorWeight=_remainingColorWeight;
- (void).cxx_destruct;
- (void)enumerateMainColors:(CDUnknownBlockType)arg1;
- (void)setMainColors:(id)arg1 weights:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

