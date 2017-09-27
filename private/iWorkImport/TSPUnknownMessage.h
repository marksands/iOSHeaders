//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSPArchivableContent.h"

@class NSArray, NSObject<OS_dispatch_data>, NSString, TSPLazyReferenceArray;

__attribute__((visibility("hidden")))
@interface TSPUnknownMessage : NSObject <TSPArchivableContent>
{
    struct MessageInfo _messageInfo;
    NSObject<OS_dispatch_data> *_messageData;
    TSPLazyReferenceArray *_objects;
    NSArray *_datas;
}

@property(retain, nonatomic) NSArray *datas; // @synthesize datas=_datas;
@property(retain, nonatomic) TSPLazyReferenceArray *objects; // @synthesize objects=_objects;
@property(readonly, nonatomic) NSObject<OS_dispatch_data> *messageData; // @synthesize messageData=_messageData;
- (id).cxx_construct;
- (void).cxx_destruct;
- (const struct MessageInfo *)messageInfo;
- (id)initWithMessageInfo:(const struct MessageInfo *)arg1 data:(id)arg2;
- (id)init;
@property(readonly, nonatomic) const struct FieldPath *fieldPath;
@property(readonly, nonatomic) unsigned long long messageVersion;
@property(readonly, nonatomic) _Bool isDiff;
@property(readonly, nonatomic) _Bool isContentUnknown;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

