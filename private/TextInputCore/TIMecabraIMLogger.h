//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableString;

@interface TIMecabraIMLogger : NSObject
{
    NSMutableString *_loggedMessage;
}

+ (_Bool)isLoggingEnabled;
@property(retain, nonatomic) NSMutableString *loggedMessage; // @synthesize loggedMessage=_loggedMessage;
- (void)dealloc;
- (void)writeLogToFile;
- (void)endLoggingForInput:(id)arg1 atFinalTimeMark:(unsigned long long)arg2;
- (id)logFilePath;
- (void)markTime:(unsigned long long)arg1;
- (void)beginLogging;

@end

