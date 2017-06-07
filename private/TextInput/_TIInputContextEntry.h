//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInput/NSCopying-Protocol.h>
#import <TextInput/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface _TIInputContextEntry : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_text;
    NSString *_senderIdentifier;
    NSDate *_timestamp;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *senderIdentifier; // @synthesize senderIdentifier=_senderIdentifier;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void)dealloc;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

