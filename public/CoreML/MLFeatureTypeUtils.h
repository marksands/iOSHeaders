//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MLFeatureTypeUtils : NSObject
{
}

+ (id)descriptionForType:(long long)arg1;
+ (id)featureDescriptionWithName:(id)arg1 consistentWithFeatureArray:(id)arg2 error:(id *)arg3;
+ (long long)featureTypeForValuesInArray:(id)arg1 error:(id *)arg2;
+ (long long)featureTypeForObject:(id)arg1;

@end
