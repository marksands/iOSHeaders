//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ChatKit/IMUnitTestRunnerDelegate-Protocol.h>

@class IMUnitTestRunner, NSFileHandle, NSString;

@interface CKUnitTestRunner : NSObject <IMUnitTestRunnerDelegate>
{
    _Bool _shouldWrite;
    IMUnitTestRunner *_runner;
    NSFileHandle *_fileHandle;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSFileHandle *fileHandle; // @synthesize fileHandle=_fileHandle;
@property(nonatomic) _Bool shouldWrite; // @synthesize shouldWrite=_shouldWrite;
@property(retain, nonatomic) IMUnitTestRunner *runner; // @synthesize runner=_runner;
- (void).cxx_destruct;
- (void)unitTestRunner:(id)arg1 didReceiveOutput:(id)arg2;
- (void)_dumpResults:(id)arg1;
- (void)runUnitTestBundleAtPath:(id)arg1 writeToFile:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

