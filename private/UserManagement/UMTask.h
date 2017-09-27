//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSUUID;

@interface UMTask : NSObject
{
    _Bool _isFinished;
    int _pid;
    NSString *_name;
    NSString *_reason;
    NSString *_bundleID;
    NSUUID *_uuid;
}

+ (id)taskWithName:(id)arg1 reason:(id)arg2 forBundleID:(id)arg3;
+ (id)taskWithName:(id)arg1 reason:(id)arg2;
@property(copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) int pid; // @synthesize pid=_pid;
@property(nonatomic) _Bool isFinished; // @synthesize isFinished=_isFinished;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (void)end;
- (void)begin;
- (id)init;

@end

