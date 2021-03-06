/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CVML.framework/CVML
 */

@interface CVMLSimilarityMatrix : NSObject {
    struct shared_ptr<vision::mod::SimilarityMatrixAbstract> { 
        struct SimilarityMatrixAbstract {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  m_MatrixImpl;
}

@property (getter=getImpl, nonatomic, readonly) void*impl;
@property (getter=getMatrixSize, nonatomic, readonly) unsigned int matrixSize;
@property (getter=getMaximumValidMatrixDistance, nonatomic, readonly) float maximumValidMatrixDistance;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)addDescriptors:(id)arg1 error:(id*)arg2;
- (BOOL)containsId:(unsigned int)arg1;
- (id)createCopyForDescriptorIds:(id)arg1;
- (void)deleteDescriptors:(id)arg1;
- (id)getAllDistancesForId:(unsigned int)arg1;
- (id)getDescriptorIdsForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (float)getDistanceBetweenDescriptor:(unsigned int)arg1 andDescriptor:(unsigned int)arg2;
- (void*)getImpl;
- (unsigned int)getMatrixSize;
- (float)getMaximumValidMatrixDistance;
- (id)initWithOptions:(id)arg1 error:(id*)arg2;

@end
