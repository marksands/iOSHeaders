//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface HapticDictionaryReader : NSObject
{
}

- (id)parseParam:(id)arg1 error:(id *)arg2;
- (id)parseEventParams:(id)arg1;
- (id)parseEvent:(id)arg1 error:(id *)arg2;
- (_Bool)parse:(id)arg1 outEventArray:(id *)arg2 outParamArray:(id *)arg3 error:(id *)arg4;

@end
