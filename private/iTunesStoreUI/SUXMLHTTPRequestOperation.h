//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ISOperation.h"

@class SSURLRequestProperties;

@interface SUXMLHTTPRequestOperation : ISOperation
{
    CDUnknownBlockType _outputBlock;
    SSURLRequestProperties *_requestProperties;
}

- (void).cxx_destruct;
- (_Bool)_isAllowedURL:(id)arg1 withURLBag:(id)arg2;
- (void)run;
@property(copy) CDUnknownBlockType outputBlock;
- (id)initWithRequestProperties:(id)arg1;

@end

