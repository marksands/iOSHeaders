//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WBSLogger.h"

@class NSDate, NSObject<OS_dispatch_queue>, NSOutputStream, NSString, NSTimer, NSURL;

@interface WBSFileLogger : NSObject <WBSLogger>
{
    NSURL *_directoryURL;
    NSOutputStream *_outputStream;
    NSObject<OS_dispatch_queue> *_logQueue;
    unsigned long long _maximumLogAgeInDays;
    NSDate *_logStartDate;
    NSTimer *_closeStreamTimer;
    NSString *_logName;
}

+ (_Bool)collectLogsInDirectory:(id)arg1 withName:(id)arg2 intoFile:(id)arg3 error:(id *)arg4;
- (void).cxx_destruct;
- (void)_removeOldLogs;
- (void)_closeStream;
- (void)_logMessage:(id)arg1 date:(id)arg2;
- (void)logMessage:(id)arg1;
- (void)logFormat:(id)arg1;
- (void)tearDown;
- (void)dealloc;
- (id)initWithDirectoryURL:(id)arg1 logName:(id)arg2 maximumLogAge:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

