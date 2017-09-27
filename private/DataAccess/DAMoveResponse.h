//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DAMessageMoveRequest, NSString;

@interface DAMoveResponse : NSObject
{
    int _status;
    NSString *_sourceID;
    NSString *_destID;
    DAMessageMoveRequest *_origRequest;
}

@property(retain, nonatomic) DAMessageMoveRequest *origRequest; // @synthesize origRequest=_origRequest;
@property(copy, nonatomic) NSString *destID; // @synthesize destID=_destID;
@property(copy, nonatomic) NSString *sourceID; // @synthesize sourceID=_sourceID;
@property(nonatomic) int status; // @synthesize status=_status;
- (void).cxx_destruct;
- (id)description;
- (id)initWithStatus:(int)arg1 sourceID:(id)arg2 destID:(id)arg3;

@end

