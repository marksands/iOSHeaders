//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SecurityFoundation/NSCopying-Protocol.h>
#import <SecurityFoundation/NSObject-Protocol.h>
#import <SecurityFoundation/NSSecureCoding-Protocol.h>

@class NSData, NSError;

@protocol SFMaskGenerationFunction <NSObject, NSCopying, NSSecureCoding>
- (NSData *)generateMaskWithLength:(long long)arg1 data:(NSData *)arg2 error:(NSError *)arg3;
@end

