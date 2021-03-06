//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (OFNSStringExtensions)
+ (id)upperBoundString:(id)arg1;
+ (id)normalizeString:(id)arg1;
+ (id)shortTimeCodeStringWithDuration:(unsigned long long)arg1;
+ (id)fullTimeCodeStringWithDuration:(unsigned long long)arg1;
+ (unsigned long long)durationFromFullTimeCodeString:(id)arg1;
+ (id)generateUUID;
- (id)stringByCapitalizingFirstCharacter;
- (id)stringByAddingPercentEscapesForURLPath;
- (id)stringByAddingPercentEscapes;
- (id)stringByReplacingPercentEscapes;
- (id)stringByDeletingTrailingSlash;
- (id)javaScriptEscapedString;
- (id)pathRelativeTo:(id)arg1;
- (id)firstline;
@end

