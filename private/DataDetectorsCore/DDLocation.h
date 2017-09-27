//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface DDLocation : NSObject <NSCoding>
{
    NSString *_fileName;
    int _firstLine;
    int _firstColumn;
    int _lastLine;
    int _lastColumn;
}

@property(readonly) int lastColumn; // @synthesize lastColumn=_lastColumn;
@property(readonly) int lastLine; // @synthesize lastLine=_lastLine;
@property(readonly) int firstColumn; // @synthesize firstColumn=_firstColumn;
@property(readonly) int firstLine; // @synthesize firstLine=_firstLine;
@property(readonly, copy) NSString *fileName; // @synthesize fileName=_fileName;
- (struct __DDExpressionPosition)position;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithFileName:(id)arg1 position:(struct __DDExpressionPosition)arg2;
- (id)initWithFileName:(id)arg1 firstLine:(int)arg2 firstColumn:(int)arg3 lastLine:(int)arg4 lastColumn:(int)arg5;

@end

