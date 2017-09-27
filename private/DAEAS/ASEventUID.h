//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ASParsingLeafNode.h"
#import "NSCopying.h"

@class NSDate, NSString;

@interface ASEventUID : NSObject <ASParsingLeafNode, NSCopying>
{
    NSDate *_exceptionDate;
    NSString *_uidWithoutExceptionDate;
    _Bool _isOutlookCreatedUid;
}

+ (_Bool)expectsContent;
+ (_Bool)notifyOfUnknownTokens;
+ (_Bool)frontingBasicTypes;
+ (_Bool)parsingWithSubItems;
+ (_Bool)parsingLeafNode;
+ (_Bool)acceptsTopLevelLeaves;
- (void).cxx_destruct;
- (void)setExceptionDate:(id)arg1;
- (id)exceptionDate;
- (id)uidForActiveSyncWithTimeZone:(id)arg1;
- (id)uidWithoutExceptionDate;
- (id)recurrenceIDForResponseEmail;
- (id)uidForResponseEmailWithTimeZone:(id)arg1;
- (id)uidForCalFramework;
- (int)parsingState;
- (id)initWithASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 lengthUntilEndOfTerminator:(int)arg6;
- (id)initWithUidString:(id)arg1;
- (id)initWithGlobalObjectIdString:(id)arg1;
- (id)initWithCalFrameworkString:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)_uidStringBySettingExceptionDateInOutlookUUIDString:(id)arg1 withTimeZone:(id)arg2;
- (id)uidFromGlobalObjId:(id)arg1 outIsOutlookCreatedUid:(_Bool *)arg2;

@end

