//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class C2SessionPool;

@interface C2RequestManager : NSObject
{
    C2SessionPool *_sessionPool;
}

+ (id)sharedManager;
@property(readonly, nonatomic) C2SessionPool *sessionPool; // @synthesize sessionPool=_sessionPool;
- (void).cxx_destruct;
- (id)testUtility_sessionTaskForTask:(id)arg1;
- (id)testUtility_sessionForTask:(id)arg1;
- (id)createDataTaskWithRequest:(id)arg1 options:(id)arg2 delegate:(id)arg3 sessionHandle:(id *)arg4;
- (id)createDataTaskWithRequest:(id)arg1 options:(id)arg2 delegate:(id)arg3;
- (id)init;

@end

