//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSError;

__attribute__((visibility("hidden")))
@interface PUOperationStatus : NSObject <NSCopying>
{
    long long _state;
    double _progress;
    NSError *_error;
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) double progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)operationStatusByMixingOperationStatus:(id)arg1 withMixFactor:(double)arg2;
- (id)initWithState:(long long)arg1 progress:(double)arg2 error:(id)arg3;
- (id)init;

@end

