//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthKit/HKQueryServerConfiguration.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _HKCorrelationQueryServerConfiguration : HKQueryServerConfiguration
{
    NSDictionary *_filterDictionary;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSDictionary *filterDictionary; // @synthesize filterDictionary=_filterDictionary;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

