//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import "IKJSDOMLSInput.h"

@class NSString;

@interface IKDOMLSInput : IKJSObject <IKJSDOMLSInput>
{
    _Bool _certifiedText;
    id _byteStream;
    NSString *_stringData;
    NSString *_encoding;
}

@property(nonatomic) _Bool certifiedText; // @synthesize certifiedText=_certifiedText;
@property(retain, nonatomic) NSString *encoding; // @synthesize encoding=_encoding;
@property(retain, nonatomic) NSString *stringData; // @synthesize stringData=_stringData;
@property(retain, nonatomic) id byteStream; // @synthesize byteStream=_byteStream;
- (void).cxx_destruct;

@end

