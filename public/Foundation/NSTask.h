//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSURL;

@interface NSTask : NSObject
{
}

+ (id)launchedTaskWithExecutableURL:(id)arg1 arguments:(id)arg2 error:(out id *)arg3 terminationHandler:(CDUnknownBlockType)arg4;
+ (id)launchedTaskWithLaunchPath:(id)arg1 arguments:(id)arg2;
+ (id)launchedTaskWithDictionary:(id)arg1;
+ (id)currentTaskDictionary;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)init;
@property long long qualityOfService;
@property(retain) id standardError;
@property(retain) id standardOutput;
@property(retain) id standardInput;
- (id)currentDirectoryPath;
@property(copy) NSArray *arguments;
@property(copy) NSDictionary *environment;
- (id)launchPath;
@property(readonly) int processIdentifier;
- (long long)suspendCount;
- (_Bool)resume;
- (_Bool)suspend;
- (void)terminate;
- (void)interrupt;
@property(copy) NSURL *executableURL;
- (void)setLaunchPath:(id)arg1;
@property(copy) NSURL *currentDirectoryURL;
- (void)setCurrentDirectoryPath:(id)arg1;
- (_Bool)launchAndReturnError:(id *)arg1;
- (void)launch;
@property(readonly, getter=isRunning) _Bool running;
@property(readonly) long long terminationReason;
@property(readonly) int terminationStatus;
@property(copy) CDUnknownBlockType terminationHandler;

@end

