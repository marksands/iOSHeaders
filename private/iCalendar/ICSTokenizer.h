//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface ICSTokenizer : NSObject
{
    NSData *_data;
    const char *_datastring;
    int _length;
    int _cursor;
    char *_token;
    int _tokenType;
    int _expectedNextTokenType;
    _Bool _printedICS;
    int _logCount;
}

@property int logCount; // @synthesize logCount=_logCount;
@property _Bool printedICS; // @synthesize printedICS=_printedICS;
- (void).cxx_destruct;
- (int)tokenType;
- (char *)currentToken;
- (char *)nextToken;
- (void)consumePropValue;
- (void)consumeParamValue;
- (_Bool)consumeEscaped:(const char *)arg1;
- (void)consumeParamName;
- (void)consumePropName;
- (void)consumeWhiteSpace;
- (_Bool)consumeEOL;
- (_Bool)consumeFolding;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithData:(id)arg1;

@end

