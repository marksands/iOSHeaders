//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface MSVLoggingLevelPair : NSObject
{
    long long _maxConsoleLoggingLevel;
    long long _maxFileLoggingLevel;
}

+ (id)pairWithMaxConsoleLevel:(long long)arg1 maxFileLevel:(long long)arg2;
@property(nonatomic) long long maxFileLoggingLevel; // @synthesize maxFileLoggingLevel=_maxFileLoggingLevel;
@property(nonatomic) long long maxConsoleLoggingLevel; // @synthesize maxConsoleLoggingLevel=_maxConsoleLoggingLevel;
- (id)initWithMaxConsoleLevel:(long long)arg1 maxFileLevel:(long long)arg2;

@end

