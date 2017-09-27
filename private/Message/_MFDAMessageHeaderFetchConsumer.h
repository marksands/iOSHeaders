//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MFDASyncResponseConsumer.h"

@class MFDAMessageStore, MFError, NSData;

@interface _MFDAMessageHeaderFetchConsumer : NSObject <MFDASyncResponseConsumer>
{
    _Bool _succeeded;
    MFError *_error;
    NSData *_data;
    MFDAMessageStore *_store;
}

@property(retain, nonatomic) MFDAMessageStore *store; // @synthesize store=_store;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) MFError *error; // @synthesize error=_error;
- (void)dealloc;
@property(readonly, nonatomic) _Bool succeeded; // @synthesize succeeded=_succeeded;
- (void)handleResponse:(id)arg1 error:(id)arg2;
- (_Bool)wantsData;

@end

