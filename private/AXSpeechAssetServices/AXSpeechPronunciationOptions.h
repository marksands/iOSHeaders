//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AXSpeechAssetServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface AXSpeechPronunciationOptions : NSObject <NSSecureCoding>
{
    NSString *_orthography;
    NSString *_language;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) NSString *orthography; // @synthesize orthography=_orthography;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

