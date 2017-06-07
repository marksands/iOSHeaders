//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoMailKitServer/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSString;

@interface NNMKMessageContent : NSObject <NSSecureCoding>
{
    _Bool _mainAlternativeValid;
    _Bool _partiallyLoaded;
    NSString *_messageId;
    NSString *_externalReferenceId;
    NSData *_textData;
    NSArray *_attachments;
}

+ (id)classesForUnarchivingTextData;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool partiallyLoaded; // @synthesize partiallyLoaded=_partiallyLoaded;
@property(retain, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
@property(retain, nonatomic) NSData *textData; // @synthesize textData=_textData;
@property(nonatomic) _Bool mainAlternativeValid; // @synthesize mainAlternativeValid=_mainAlternativeValid;
@property(retain, nonatomic) NSString *externalReferenceId; // @synthesize externalReferenceId=_externalReferenceId;
@property(retain, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

