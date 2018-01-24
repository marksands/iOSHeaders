//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DAEAS/ASItem.h>

#import "DAMailMessageAttachment.h"
#import "NSSecureCoding.h"

@class NSNumber, NSString;

@interface ASAttachment : ASItem <DAMailMessageAttachment, NSSecureCoding>
{
    NSString *_name;
    NSNumber *_size;
    NSNumber *_method;
    NSString *_displayName;
    NSString *_contentId;
    NSString *_contentLocation;
    NSNumber *_isInline;
    NSNumber *_hasBase64Transfer;
    NSString *_clientId;
}

+ (_Bool)supportsSecureCoding;
+ (id)asParseRules;
+ (_Bool)notifyOfUnknownTokens;
+ (_Bool)frontingBasicTypes;
+ (_Bool)parsingWithSubItems;
+ (_Bool)parsingLeafNode;
+ (_Bool)acceptsTopLevelLeaves;
@property(copy, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(copy, nonatomic) NSNumber *hasBase64Transfer; // @synthesize hasBase64Transfer=_hasBase64Transfer;
@property(copy, nonatomic) NSNumber *isInline; // @synthesize isInline=_isInline;
@property(copy, nonatomic) NSString *contentLocation; // @synthesize contentLocation=_contentLocation;
@property(copy, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSNumber *method; // @synthesize method=_method;
@property(copy, nonatomic) NSNumber *size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (_Bool)isMostDefinitelyBase64ed;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)setPercentEscapedName:(id)arg1;

@end

