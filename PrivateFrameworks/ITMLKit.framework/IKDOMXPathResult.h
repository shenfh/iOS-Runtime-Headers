/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKDOMXPathResult : IKJSObject <IKJSDOMXPathResult> {
    NSArray * _nodes;
    int  _type;
}

@property (nonatomic, readonly) BOOL booleanValue;
@property (nonatomic, readonly) BOOL invalidIteratorState;
@property (nonatomic, copy) NSArray *nodes;
@property (nonatomic, readonly) int numberValue;
@property (nonatomic, readonly) int resultType;
@property (nonatomic, readonly) IKDOMNode *singleNodeValue;
@property (nonatomic, readonly) int snapshotLength;
@property (nonatomic, readonly) NSString *stringValue;
@property int type;

- (void).cxx_destruct;
- (BOOL)booleanValue;
- (id)initWithAppContext:(id)arg1 type:(int)arg2 nodes:(id)arg3;
- (BOOL)invalidIteratorState;
- (id)iterateNext;
- (id)nodes;
- (int)numberValue;
- (int)resultType;
- (void)setNodes:(id)arg1;
- (void)setType:(int)arg1;
- (id)singleNodeValue;
- (id)snapshotItem:(int)arg1;
- (int)snapshotLength;
- (id)stringValue;
- (int)type;

@end
