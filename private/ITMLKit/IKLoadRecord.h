//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ISURLOperation, NSString, NSURL;

@interface IKLoadRecord : NSObject
{
    _Bool _loadCompleted;
    NSURL *_URL;
    ISURLOperation *_opertaion;
    NSString *_scriptStr;
}

@property(retain, nonatomic) NSString *scriptStr; // @synthesize scriptStr=_scriptStr;
@property(nonatomic) _Bool loadCompleted; // @synthesize loadCompleted=_loadCompleted;
@property(retain, nonatomic) ISURLOperation *opertaion; // @synthesize opertaion=_opertaion;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;

@end

